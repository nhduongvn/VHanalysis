#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_3B_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_3B/pt_jet2_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_3B = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_3B", "pt_jet2_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->Range(-100,-0.7921818,566.6667,4.119336);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet2__35 = new TH1D("_QuadJet_TripleTag_3B_pt_jet2__35","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(5,44);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(6,542);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(7,1491);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(8,2127);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(9,2242);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(10,1923);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(11,1462);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(12,1082);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(13,744);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(14,537);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(15,391);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(16,284);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(17,244);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(18,156);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(19,133);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(20,87);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(21,62);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(22,53);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(23,48);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(24,29);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(25,28);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(26,21);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(27,13);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(28,23);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(29,9);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(30,4);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(31,6);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(32,5);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(33,6);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(34,2);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(35,4);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(36,2);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(37,2);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(38,1);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(39,1);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(42,1);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(44,1);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(47,1);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetBinContent(50,2);
   _QuadJet_TripleTag_3B_pt_jet2__35->SetEntries(13813);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13813  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  100.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet2__35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet2__35);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet2__35->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet2__35->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet2__35->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__35->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__35->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_3B->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_3B->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_3B->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_3B);
}
