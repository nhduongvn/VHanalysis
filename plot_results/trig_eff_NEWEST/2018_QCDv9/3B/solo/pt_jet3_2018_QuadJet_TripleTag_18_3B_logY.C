#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_3B_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_3B/pt_jet3_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_3B = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_3B", "pt_jet3_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->Range(-100,-0.8099823,566.6667,4.279541);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3__38 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3__38","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(5,1005);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(6,3112);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(7,3047);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(8,2387);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(9,1516);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(10,944);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(11,633);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(12,386);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(13,272);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(14,165);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(15,99);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(16,73);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(17,55);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(18,31);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(19,18);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(20,20);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(21,18);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(22,8);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(23,6);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(24,7);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(25,2);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(26,3);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(27,1);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(29,1);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(31,1);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetBinContent(33,2);
   _QuadJet_TripleTag_3B_pt_jet3__38->SetEntries(13813);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13813  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  75.16");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet3__38->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3__38->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet3__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__38->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_3B->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_3B->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_3B);
}
