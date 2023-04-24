#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-100,-0.70748,566.6667,3.35702);
   pt_jet2_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2__65 = new TH1D("_QuadJet_noTag_pt_jet2__65","",50,0,500);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(5,20);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(6,259);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(7,401);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(8,471);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(9,392);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(10,315);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(11,214);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(12,146);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(13,96);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(14,76);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(15,63);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(16,42);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(17,26);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(18,20);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(19,23);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(20,12);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(21,16);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(22,8);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(23,2);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(24,3);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(25,2);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(26,4);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(27,2);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(28,2);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(29,4);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(32,1);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(33,2);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(34,1);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(35,1);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(39,1);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(46,1);
   _QuadJet_noTag_pt_jet2__65->SetBinContent(50,1);
   _QuadJet_noTag_pt_jet2__65->SetEntries(2627);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2627   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  92.89");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.23");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2__65->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2__65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet2__65->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2__65->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2__65->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet2__65->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__65->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__65->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__65->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet2__65->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__65->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__65->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__65->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__65->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__65->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}
