#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-100,-0.8205819,566.6667,4.374937);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__14 = new TH1D("_QuadJet_TripleTag_pt_jet2__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(5,150);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(6,1711);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(7,3309);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(8,3783);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(9,3526);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(10,2650);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(11,1840);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(12,1369);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(13,967);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(14,685);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(15,533);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(16,377);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(17,267);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(18,199);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(19,126);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(20,131);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(21,88);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(22,58);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(23,44);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(24,35);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(25,28);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(26,19);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(27,22);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(28,27);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(29,10);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(30,5);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(31,9);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(32,3);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(33,8);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(34,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(35,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(36,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(39,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(42,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(44,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(46,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(49,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet2__14->SetEntries(22003);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22003  ");
   ptstats_LaTex = ptstats->AddText("Mean  =   94.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__14->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
