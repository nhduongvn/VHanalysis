#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18/pt_jet2_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:55 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18 = new TCanvas("pt_jet2_2018_QuadJet_noTag_18", "pt_jet2_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18->Range(-100,-0.7235279,566.6667,3.50145);
   pt_jet2_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2__17 = new TH1D("_QuadJet_noTag_pt_jet2__17","",50,0,500);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(5,26);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(6,193);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(7,514);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(8,633);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(9,552);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(10,456);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(11,342);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(12,242);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(13,156);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(14,136);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(15,95);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(16,57);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(17,41);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(18,35);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(19,27);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(20,21);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(21,13);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(22,13);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(23,12);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(24,3);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(25,6);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(26,8);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(27,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(28,3);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(30,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(31,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(32,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(34,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(37,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(38,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(50,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(51,1);
   _QuadJet_noTag_pt_jet2__17->SetEntries(3595);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3595   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.15");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.58");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2__17);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet2__17->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2__17->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2__17->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet2__17->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__17->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__17->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__17->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet2__17->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__17->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__17->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__17->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__17->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__17->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18->Modified();
   pt_jet2_2018_QuadJet_noTag_18->cd();
   pt_jet2_2018_QuadJet_noTag_18->SetSelected(pt_jet2_2018_QuadJet_noTag_18);
}
