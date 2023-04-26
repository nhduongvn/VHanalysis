#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref/pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-100,-0.8244582,566.6667,4.409824);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3_ref__261 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3_ref__261","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(5,1989);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(6,4063);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(7,3812);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(8,3000);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(9,2016);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(10,1364);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(11,908);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(12,598);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(13,357);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(14,247);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(15,153);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(16,101);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(17,78);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(18,56);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(19,44);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(20,22);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(21,22);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(22,14);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(23,11);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(24,5);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(25,4);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(26,7);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(27,5);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(28,4);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(29,2);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(30,5);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(32,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(38,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetBinContent(46,1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetEntries(18891);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 18891  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  75.32");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet3_ref__261);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3_ref__261->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ideal_ref);
}
