#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18/pt_jet1_2018_QuadJet_noTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18 = new TCanvas("pt_jet1_2018_QuadJet_noTag_18", "pt_jet1_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18->Range(-100,-0.7036605,566.6667,3.322644);
   pt_jet1_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1__11 = new TH1D("_QuadJet_noTag_pt_jet1__11","",50,0,500);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(6,8);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(7,57);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(8,151);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(9,266);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(10,347);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(11,439);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(12,356);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(13,340);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(14,274);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(15,230);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(16,187);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(17,155);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(18,129);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(19,105);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(20,80);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(21,68);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(22,70);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(23,52);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(24,34);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(25,27);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(26,29);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(27,32);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(28,17);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(29,15);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(30,18);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(31,12);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(32,9);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(33,13);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(34,15);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(35,8);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(36,3);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(37,11);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(38,4);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(39,7);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(40,3);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(41,5);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(42,5);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(43,3);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(44,1);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(45,2);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(46,1);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(47,1);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(48,2);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(50,2);
   _QuadJet_noTag_pt_jet1__11->SetBinContent(51,16);
   _QuadJet_noTag_pt_jet1__11->SetEntries(3609);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3609   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  141.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  60.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1__11->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1__11->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1__11->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1__11->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__11->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__11->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__11->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1__11->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__11->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__11->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__11->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__11->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__11->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18->Modified();
   pt_jet1_2018_QuadJet_noTag_18->cd();
   pt_jet1_2018_QuadJet_noTag_18->SetSelected(pt_jet1_2018_QuadJet_noTag_18);
}
