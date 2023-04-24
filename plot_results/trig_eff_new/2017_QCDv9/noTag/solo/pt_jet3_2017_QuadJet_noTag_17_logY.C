#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17/pt_jet3_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:16 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17 = new TCanvas("pt_jet3_2017_QuadJet_noTag_17", "pt_jet3_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17->Range(-100,-0.7307447,566.6667,3.566402);
   pt_jet3_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__89 = new TH1D("_QuadJet_noTag_pt_jet3__89","",50,0,500);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(5,384);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(6,723);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(7,485);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(8,352);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(9,195);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(10,97);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(11,63);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(12,39);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(13,30);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(14,16);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(15,13);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(16,7);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(17,1);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(18,2);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(19,1);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(20,2);
   _QuadJet_noTag_pt_jet3__89->SetBinContent(29,1);
   _QuadJet_noTag_pt_jet3__89->SetEntries(2411);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2411   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  67.35");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   20.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3__89->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__89->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__89->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__89->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17->Modified();
   pt_jet3_2017_QuadJet_noTag_17->cd();
   pt_jet3_2017_QuadJet_noTag_17->SetSelected(pt_jet3_2017_QuadJet_noTag_17);
}
