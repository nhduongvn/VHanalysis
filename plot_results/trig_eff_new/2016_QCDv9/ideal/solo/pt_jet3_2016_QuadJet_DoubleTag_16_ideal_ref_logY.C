#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref/pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref", "pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->Range(-100,-0.8633874,566.6667,4.760186);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet3_ref__258 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet3_ref__258","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(5,5307);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(6,8323);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(7,5559);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(8,3524);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(9,2062);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(10,1362);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(11,906);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(12,598);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(13,355);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(14,246);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(15,153);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(16,101);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(17,78);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(18,56);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(19,44);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(20,22);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(21,22);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(22,14);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(23,11);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(24,5);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(25,4);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(26,7);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(27,5);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(28,4);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(29,2);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(30,5);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(32,1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(33,1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(38,1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetBinContent(46,1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetEntries(28779);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28779  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  68.29");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet3_ref__258);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3_ref__258->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_ideal_ref);
}
