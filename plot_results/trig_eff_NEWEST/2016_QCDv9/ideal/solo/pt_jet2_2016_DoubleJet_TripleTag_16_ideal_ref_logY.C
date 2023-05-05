#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref/pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref", "pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-100,-0.6309396,566.6667,2.668156);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet2_ref__18 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet2_ref__18","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(5,6);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(6,24);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(7,66);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(8,97);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(9,115);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(10,106);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(11,97);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(12,66);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(13,65);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(14,33);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(15,22);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(16,27);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(17,17);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(18,18);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(19,8);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(20,11);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(21,8);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(22,6);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(23,4);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(24,5);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(25,2);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(26,3);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(27,1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(28,1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(29,3);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(30,1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetBinContent(35,1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetEntries(814);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 814    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  109.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.46");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet2_ref__18);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2_ref__18->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_ideal_ref);
}
