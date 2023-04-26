#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-100,-0.7083943,566.6667,3.365249);
   pt_jet2_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2__17 = new TH1D("_QuadJet_noTag_pt_jet2__17","",50,0,500);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(5,20);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(6,264);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(7,410);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(8,479);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(9,397);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(10,319);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(11,221);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(12,148);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(13,97);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(14,77);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(15,63);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(16,42);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(17,27);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(18,20);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(19,23);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(20,13);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(21,17);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(22,8);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(23,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(24,3);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(25,3);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(26,4);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(27,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(28,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(29,4);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(32,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(33,2);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(34,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(35,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(39,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(46,1);
   _QuadJet_noTag_pt_jet2__17->SetBinContent(50,1);
   _QuadJet_noTag_pt_jet2__17->SetEntries(2673);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2673   ");
   ptstats_LaTex = ptstats->AddText("Mean  =   92.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.29");
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
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}
