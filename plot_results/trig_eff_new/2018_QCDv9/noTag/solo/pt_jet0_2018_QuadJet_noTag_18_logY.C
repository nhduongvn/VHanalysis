#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18/pt_jet0_2018_QuadJet_noTag_18
//=========  (Wed Apr 26 16:41:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18 = new TCanvas("pt_jet0_2018_QuadJet_noTag_18", "pt_jet0_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18->Range(-100,-0.6735275,566.6667,3.051447);
   pt_jet0_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0__5 = new TH1D("_QuadJet_noTag_pt_jet0__5","",50,0,500);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(7,1);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(8,5);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(9,27);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(10,53);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(11,103);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(12,159);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(13,201);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(14,235);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(15,228);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(16,227);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(17,252);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(18,231);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(19,179);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(20,162);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(21,146);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(22,137);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(23,134);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(24,124);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(25,104);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(26,87);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(27,62);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(28,77);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(29,61);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(30,55);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(31,42);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(32,44);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(33,36);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(34,47);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(35,30);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(36,31);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(37,21);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(38,27);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(39,20);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(40,22);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(41,19);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(42,26);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(43,17);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(44,16);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(45,12);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(46,17);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(47,10);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(48,4);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(49,11);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(50,12);
   _QuadJet_noTag_pt_jet0__5->SetBinContent(51,88);
   _QuadJet_noTag_pt_jet0__5->SetEntries(3602);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3602   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0__5->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0__5->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0__5->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0__5->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__5->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0__5->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__5->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0__5->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__5->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__5->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0__5->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0__5->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0__5->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18->Modified();
   pt_jet0_2018_QuadJet_noTag_18->cd();
   pt_jet0_2018_QuadJet_noTag_18->SetSelected(pt_jet0_2018_QuadJet_noTag_18);
}
