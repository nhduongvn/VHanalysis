#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_ref/pt_jet2_2017_QuadJet_noTag_17_ref
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_ref", "pt_jet2_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_ref->Range(-100,-0.8341372,566.6667,4.496935);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2_ref__282 = new TH1D("_QuadJet_noTag_tagged_pt_jet2_ref__282","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(5,747);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(6,4191);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(7,4856);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(8,4114);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(9,3226);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(10,2352);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(11,1814);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(12,1270);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(13,998);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(14,689);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(15,489);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(16,434);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(17,275);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(18,198);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(19,165);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(20,124);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(21,92);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(22,68);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(23,57);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(24,32);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(25,29);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(26,21);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(27,14);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(28,18);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(29,14);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(30,6);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(31,9);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(32,4);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(33,5);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(34,3);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(35,4);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(36,7);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(37,3);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(38,4);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(39,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(42,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(44,2);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(46,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(47,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(49,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetBinContent(51,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetEntries(26340);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 26340  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  87.67");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2_ref__282);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet2_ref__282->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__282->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet2_2017_QuadJet_noTag_17_ref->cd();
   pt_jet2_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet2_2017_QuadJet_noTag_17_ref);
}
