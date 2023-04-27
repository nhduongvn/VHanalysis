#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17/pt_jet1_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17", "pt_jet1_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17->Range(-100,-0.1215321,566.6667,4.104089);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__8 = new TH1D("_QuadJet_TripleTag_pt_jet1__8","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(5,4);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(6,97);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(7,582);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(8,1483);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(9,2354);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(10,2535);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(11,2515);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(12,2144);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(13,1831);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(14,1466);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(15,1212);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(16,1009);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(17,795);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(18,631);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(19,519);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(20,469);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(21,367);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(22,285);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(23,221);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(24,206);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(25,176);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(26,119);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(27,132);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(28,114);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(29,100);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(30,70);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(31,72);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(32,60);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(33,53);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(34,41);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(35,45);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(36,35);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(37,25);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(38,24);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(39,21);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(40,17);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(41,16);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(42,16);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(43,28);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(44,6);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(45,10);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(46,9);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(47,12);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(48,5);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(49,9);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(50,5);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(51,58);
   _QuadJet_TripleTag_pt_jet1__8->SetEntries(22003);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22003  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  132.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  58.07");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet1__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet1__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet1__8->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet1__8->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet1__8->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet1__8->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__8->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__8->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__8->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet1__8->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__8->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__8->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__8->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__8->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__8->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17->cd();
   pt_jet1_2017_QuadJet_TripleTag_17->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17);
}
