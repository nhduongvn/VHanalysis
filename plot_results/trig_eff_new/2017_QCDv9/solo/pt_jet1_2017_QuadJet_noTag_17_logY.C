#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17/pt_jet1_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17 = new TCanvas("pt_jet1_2017_QuadJet_noTag_17", "pt_jet1_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17->Range(-100,-0.6933407,566.6667,3.229766);
   pt_jet1_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1__41 = new TH1D("_QuadJet_noTag_pt_jet1__41","",50,0,500);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(6,16);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(7,76);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(8,173);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(9,244);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(10,289);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(11,363);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(12,250);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(13,215);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(14,149);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(15,127);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(16,105);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(17,93);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(18,88);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(19,66);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(20,59);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(21,53);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(22,37);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(23,28);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(24,17);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(25,18);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(26,18);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(27,15);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(28,12);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(29,14);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(30,10);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(31,8);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(32,8);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(33,10);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(34,9);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(35,4);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(36,3);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(37,4);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(38,8);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(39,3);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(40,1);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(41,1);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(42,4);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(43,3);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(44,3);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(45,2);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(46,1);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(47,1);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(48,1);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(49,2);
   _QuadJet_noTag_pt_jet1__41->SetBinContent(51,16);
   _QuadJet_noTag_pt_jet1__41->SetEntries(2627);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2627   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  134.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.33");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1__41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1__41->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1__41->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1__41->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1__41->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__41->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__41->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__41->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1__41->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__41->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__41->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__41->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__41->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__41->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17->Modified();
   pt_jet1_2017_QuadJet_noTag_17->cd();
   pt_jet1_2017_QuadJet_noTag_17->SetSelected(pt_jet1_2017_QuadJet_noTag_17);
}
