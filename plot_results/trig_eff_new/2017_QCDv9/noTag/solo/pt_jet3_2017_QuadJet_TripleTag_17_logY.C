#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Wed Apr 26 16:41:49 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-100,-0.8423873,566.6667,4.571185);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__20 = new TH1D("_QuadJet_TripleTag_pt_jet3__20","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(5,2478);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(6,5653);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(7,4627);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(8,3212);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(9,1914);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(10,1178);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(11,769);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(12,439);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(13,280);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(14,196);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(15,129);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(16,99);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(17,50);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(18,37);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(19,12);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(20,18);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(21,11);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(22,8);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(23,5);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(24,8);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(25,3);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(26,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(27,2);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(28,3);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(29,2);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(30,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(32,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(33,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(47,1);
   _QuadJet_TripleTag_pt_jet3__20->SetEntries(21138);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21138  ");
   ptstats_LaTex = ptstats->AddText("Mean  =   70.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   23.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3__20->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__20->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__20->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3__20->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__20->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__20->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__20->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3__20->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__20->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__20->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__20->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__20->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__20->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}
