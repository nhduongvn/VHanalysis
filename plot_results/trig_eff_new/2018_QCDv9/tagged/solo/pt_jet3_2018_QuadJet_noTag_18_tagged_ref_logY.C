#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_tagged_ref/pt_jet3_2018_QuadJet_noTag_18_tagged_ref
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_tagged_ref = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_tagged_ref", "pt_jet3_2018_QuadJet_noTag_18_tagged_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->Range(-100,-0.8984656,566.6667,5.07589);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3_ref__78 = new TH1D("_QuadJet_noTag_tagged_pt_jet3_ref__78","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(5,10130);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(6,15882);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(7,9964);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(8,6359);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(9,3939);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(10,2475);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(11,1608);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(12,1021);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(13,690);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(14,462);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(15,281);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(16,224);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(17,130);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(18,93);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(19,62);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(20,53);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(21,50);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(22,15);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(23,21);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(24,9);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(25,4);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(26,11);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(27,6);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(28,6);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(29,3);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(30,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(32,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(33,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(34,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(35,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(37,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetEntries(53504);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53504  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  67.87");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3_ref__78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->Modified();
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->cd();
   pt_jet3_2018_QuadJet_noTag_18_tagged_ref->SetSelected(pt_jet3_2018_QuadJet_noTag_18_tagged_ref);
}
