#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ref/pt_jet0_2018_QuadJet_noTag_18_ref
//=========  (Tue May  2 10:16:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ref", "pt_jet0_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->Range(-100,1.301385,566.6667,5.53029);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,106);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,6424);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,24579);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,44702);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,59014);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,65995);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,67585);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,65416);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,61409);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,57174);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,51794);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,46788);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,42401);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,37438);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,33148);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,29242);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,26045);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,22492);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,19875);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,17892);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,15654);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,13865);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,12507);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,10988);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,9748);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,8603);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,7875);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,6904);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,6105);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,5479);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,5078);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,4472);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,3915);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,3611);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,3316);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,2948);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,2643);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,2422);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,2263);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,1992);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1809);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,1655);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,1506);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,1342);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,1224);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,1139);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,12317);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(930899);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 930899 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.76");
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
   pt_jet0_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ref);
}
