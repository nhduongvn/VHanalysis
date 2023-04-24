#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ref/pt_jet1_2018_QuadJet_noTag_18_ref
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ref", "pt_jet1_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->Range(-100,0.2280283,566.6667,4.47987);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1_ref__66 = new TH1D("_QuadJet_noTag_tagged_pt_jet1_ref__66","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(5,133);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(6,2105);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(7,4777);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(8,5984);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(9,5986);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(10,5403);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(11,4755);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(12,4119);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(13,3278);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(14,2840);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(15,2272);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(16,1927);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(17,1583);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(18,1371);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(19,1075);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(20,873);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(21,766);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(22,599);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(23,533);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(24,418);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(25,326);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(26,290);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(27,279);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(28,226);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(29,189);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(30,142);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(31,126);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(32,100);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(33,95);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(34,77);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(35,78);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(36,70);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(37,46);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(38,57);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(39,42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(40,34);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(41,41);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(42,26);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(43,24);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(44,21);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(45,25);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(46,24);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(47,17);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(48,9);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(49,12);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(50,14);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetBinContent(51,122);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetEntries(53309);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53309  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  120.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  58.15");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1_ref__66);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet1_ref__66->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1_ref__66->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ref);
}
