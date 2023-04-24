#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17/pt_jet0_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17 = new TCanvas("pt_jet0_2017_QuadJet_noTag_17", "pt_jet0_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17->Range(-100,-0.6638877,566.6667,2.964689);
   pt_jet0_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0__17 = new TH1D("_QuadJet_noTag_pt_jet0__17","",50,0,500);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(7,1);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(8,13);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(9,24);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(10,74);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(11,106);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(12,175);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(13,211);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(14,181);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(15,172);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(16,157);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(17,145);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(18,133);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(19,127);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(20,117);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(21,98);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(22,105);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(23,70);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(24,69);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(25,58);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(26,57);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(27,47);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(28,61);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(29,28);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(30,32);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(31,24);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(32,33);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(33,39);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(34,28);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(35,21);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(36,22);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(37,22);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(38,18);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(39,14);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(40,12);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(41,14);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(42,7);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(43,6);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(44,8);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(45,10);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(46,5);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(47,4);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(48,7);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(49,4);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(50,7);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(51,61);
   _QuadJet_noTag_pt_jet0__17->SetEntries(2627);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2627   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  193.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.99");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0__17);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0__17->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0__17->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0__17->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0__17->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__17->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0__17->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__17->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0__17->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__17->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__17->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__17->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0__17->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__17->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17->Modified();
   pt_jet0_2017_QuadJet_noTag_17->cd();
   pt_jet0_2017_QuadJet_noTag_17->SetSelected(pt_jet0_2017_QuadJet_noTag_17);
}
