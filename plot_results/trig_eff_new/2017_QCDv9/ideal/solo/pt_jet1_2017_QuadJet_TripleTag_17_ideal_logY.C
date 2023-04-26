#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_ideal/pt_jet1_2017_QuadJet_TripleTag_17_ideal
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_ideal", "pt_jet1_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.7125387,566.6667,3.402548);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__116 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__116","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(7,72);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(8,292);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(9,432);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(10,444);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(11,517);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(12,412);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(13,365);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(14,313);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(15,275);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(16,236);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(17,189);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(18,137);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(19,109);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(20,112);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(21,85);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(22,67);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(23,48);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(24,54);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(25,43);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(26,26);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(27,27);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(28,32);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(29,35);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(30,19);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(31,26);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(32,15);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(33,14);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(35,13);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(36,9);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(37,6);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(38,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(39,7);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(40,6);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(41,4);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(42,8);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(43,6);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(44,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(45,3);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(46,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(47,3);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(49,1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(50,2);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(51,14);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetEntries(4491);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4491   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  138.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__116);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__116->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_ideal);
}
