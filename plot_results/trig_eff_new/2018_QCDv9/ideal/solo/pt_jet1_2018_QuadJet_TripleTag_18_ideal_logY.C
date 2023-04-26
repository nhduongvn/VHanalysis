#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal/pt_jet1_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal", "pt_jet1_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.08481651,566.6667,3.773648);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__116 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__116","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(7,112);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(8,468);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(9,886);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(10,1209);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(11,1289);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(12,1238);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(13,1063);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(14,965);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(15,751);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(16,691);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(17,567);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(18,515);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(19,388);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(20,318);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(21,290);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(22,226);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(23,193);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(24,158);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(25,120);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(26,98);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(27,116);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(28,96);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(29,75);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(30,54);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(31,42);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(32,40);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(33,41);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(34,19);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(35,31);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(36,15);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(37,13);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(38,25);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(39,18);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(40,14);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(41,17);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(42,10);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(43,11);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(44,15);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(45,12);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(46,12);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(47,7);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(48,5);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(49,4);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(50,6);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetBinContent(51,56);
   _QuadJet_TripleTag_ideal_pt_jet1__116->SetEntries(12299);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12299  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    145");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.81");
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
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal);
}
