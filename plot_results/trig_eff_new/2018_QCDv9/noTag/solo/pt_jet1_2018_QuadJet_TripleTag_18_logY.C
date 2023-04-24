#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18/pt_jet1_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:55 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18", "pt_jet1_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18->Range(-100,-0.1660594,566.6667,4.504835);
   pt_jet1_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__8 = new TH1D("_QuadJet_TripleTag_pt_jet1__8","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(5,4);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(6,136);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(7,875);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(8,2384);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(9,4245);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(10,5556);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(11,5757);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(12,5550);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(13,4815);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(14,4151);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(15,3490);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(16,2772);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(17,2261);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(18,1951);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(19,1562);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(20,1258);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(21,1076);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(22,903);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(23,716);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(24,567);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(25,491);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(26,430);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(27,368);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(28,323);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(29,265);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(30,215);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(31,171);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(32,159);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(33,149);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(34,105);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(35,96);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(36,85);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(37,86);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(38,81);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(39,60);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(40,58);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(41,42);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(42,42);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(43,29);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(44,37);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(45,32);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(46,23);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(47,25);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(48,21);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(49,18);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(50,23);
   _QuadJet_TripleTag_pt_jet1__8->SetBinContent(51,183);
   _QuadJet_TripleTag_pt_jet1__8->SetEntries(53646);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53646  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  139.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  58.98");
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
   pt_jet1_2018_QuadJet_TripleTag_18->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18->cd();
   pt_jet1_2018_QuadJet_TripleTag_18->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18);
}
