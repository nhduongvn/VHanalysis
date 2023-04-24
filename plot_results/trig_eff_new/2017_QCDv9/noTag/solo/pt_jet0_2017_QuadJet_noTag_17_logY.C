#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17/pt_jet0_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17 = new TCanvas("pt_jet0_2017_QuadJet_noTag_17", "pt_jet0_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17->Range(-100,-0.6604355,566.6667,2.93362);
   pt_jet0_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0__17 = new TH1D("_QuadJet_noTag_pt_jet0__17","",50,0,500);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(7,1);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(8,11);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(9,23);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(10,65);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(11,102);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(12,166);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(13,198);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(14,171);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(15,160);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(16,149);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(17,133);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(18,120);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(19,112);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(20,106);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(21,86);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(22,96);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(23,64);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(24,60);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(25,49);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(26,54);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(27,41);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(28,55);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(29,24);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(30,29);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(31,23);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(32,29);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(33,37);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(34,27);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(35,17);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(36,19);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(37,22);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(38,15);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(39,12);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(40,10);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(41,11);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(42,8);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(43,5);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(44,7);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(45,9);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(46,5);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(47,5);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(48,7);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(49,4);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(50,6);
   _QuadJet_noTag_pt_jet0__17->SetBinContent(51,58);
   _QuadJet_noTag_pt_jet0__17->SetEntries(2411);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2411   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  192.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   82.1");
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
