#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ref/pt_jet0_2017_QuadJet_noTag_17_ref
//=========  (Wed Apr 26 16:41:49 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ref", "pt_jet0_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->Range(-100,0.9665398,566.6667,5.280541);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,50);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,3321);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,13825);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,24581);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,32802);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,36199);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,37290);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,36526);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,34355);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,31551);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,28609);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,25760);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,23135);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,20956);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,18111);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,16024);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,14119);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,12520);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,10933);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,9808);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,8408);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,7513);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,6646);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,5972);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,5479);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,4679);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,4142);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,3893);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,3355);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,3032);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,2777);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,2347);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,2094);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,1926);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,1870);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,1565);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,1434);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,1270);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,1177);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,1050);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,979);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,890);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,784);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,744);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,665);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,587);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,6684);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(512437);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 512437 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.26");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__6->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ref->cd();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ref);
}
