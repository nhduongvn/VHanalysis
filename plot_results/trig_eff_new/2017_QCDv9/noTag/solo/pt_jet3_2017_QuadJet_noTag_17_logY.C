#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17/pt_jet3_2017_QuadJet_noTag_17
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17 = new TCanvas("pt_jet3_2017_QuadJet_noTag_17", "pt_jet3_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17->Range(-100,-0.73583,566.6667,3.612169);
   pt_jet3_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__23 = new TH1D("_QuadJet_noTag_pt_jet3__23","",50,0,500);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(5,425);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(6,794);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(7,542);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(8,395);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(9,214);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(10,108);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(11,70);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(12,42);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(13,33);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(14,17);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(15,15);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(16,8);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(17,2);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(18,3);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(19,2);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(20,2);
   _QuadJet_noTag_pt_jet3__23->SetBinContent(29,1);
   _QuadJet_noTag_pt_jet3__23->SetEntries(2673);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2673   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  67.44");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  20.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3__23->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__23->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__23->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__23->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17->Modified();
   pt_jet3_2017_QuadJet_noTag_17->cd();
   pt_jet3_2017_QuadJet_noTag_17->SetSelected(pt_jet3_2017_QuadJet_noTag_17);
}
