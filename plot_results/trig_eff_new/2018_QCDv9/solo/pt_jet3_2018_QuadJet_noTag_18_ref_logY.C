#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ref/pt_jet3_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ref", "pt_jet3_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ref->Range(-100,-1.031019,566.6667,6.268872);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3_ref__96 = new TH1D("_QuadJet_noTag_pt_jet3_ref__96","",50,0,500);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(5,152298);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(6,182530);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(7,91828);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(8,48265);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(9,26661);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(10,15215);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(11,9040);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(12,5697);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(13,3415);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(14,2205);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(15,1410);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(16,969);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(17,624);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(18,412);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(19,318);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(20,191);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(21,163);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(22,114);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(23,89);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(24,58);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(25,30);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(26,30);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(27,26);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(28,23);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(29,29);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(30,14);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(31,7);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(32,5);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(33,7);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(34,4);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(35,2);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(36,2);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(37,2);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(38,2);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(39,1);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(40,2);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(43,1);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(46,1);
   _QuadJet_noTag_pt_jet3_ref__96->SetBinContent(51,1);
   _QuadJet_noTag_pt_jet3_ref__96->SetEntries(541691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 541691 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.71");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.15");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3_ref__96->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3_ref__96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3_ref__96->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3_ref__96->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3_ref__96->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3_ref__96->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__96->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3_ref__96->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__96->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__96->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ref->cd();
   pt_jet3_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ref);
}
