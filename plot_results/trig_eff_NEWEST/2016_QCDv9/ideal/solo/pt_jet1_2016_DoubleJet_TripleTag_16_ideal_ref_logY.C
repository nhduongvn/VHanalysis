#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref/pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref", "pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-100,-0.6244274,566.6667,2.609546);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1_ref__12 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1_ref__12","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(10,102);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(11,100);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(12,95);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(13,82);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(14,52);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(15,47);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(16,48);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(17,27);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(18,29);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(19,25);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(20,35);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(21,27);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(22,26);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(23,21);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(24,9);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(25,13);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(26,12);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(27,7);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(28,8);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(29,8);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(30,7);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(31,4);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(32,3);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(34,3);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(35,2);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(36,1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(37,2);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(38,2);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(40,2);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(43,5);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(45,2);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetBinContent(51,5);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetEntries(814);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 814    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  156.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.35");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1_ref__12->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal_ref);
}
