#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_ref/pt_jet2_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_ref", "pt_jet2_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_ref->Range(-100,-0.6656818,566.6667,5.991136);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2_ref__18 = new TH1D("_QuadJet_noTag_pt_jet2_ref__18","",50,0,500);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(5,24500);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(6,111662);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(7,109003);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(8,83019);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(9,58946);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(10,41085);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(11,29003);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(12,19923);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(13,14103);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(14,9940);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(15,7158);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(16,5411);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(17,3828);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(18,2815);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(19,2117);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(20,1573);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(21,1250);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(22,931);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(23,698);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(24,566);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(25,432);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(26,363);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(27,287);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(28,233);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(29,191);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(30,145);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(31,113);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(32,104);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(33,84);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(34,57);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(35,59);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(36,56);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(37,38);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(38,31);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(39,26);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(40,22);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(41,22);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(42,19);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(43,11);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(44,15);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(45,7);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(46,9);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(47,9);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(48,2);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(49,8);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(50,6);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(51,44);
   _QuadJet_noTag_pt_jet2_ref__18->SetEntries(529924);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 529924 ");
   ptstats_LaTex = ptstats->AddText("Mean  =   81.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  32.62");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2_ref__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2_ref__18);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet2_ref__18->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet2_2017_QuadJet_noTag_17_ref->cd();
   pt_jet2_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet2_2017_QuadJet_noTag_17_ref);
}
