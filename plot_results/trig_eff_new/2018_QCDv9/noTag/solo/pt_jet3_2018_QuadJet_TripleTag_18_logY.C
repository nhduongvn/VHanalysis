#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18/pt_jet3_2018_QuadJet_TripleTag_18
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18", "pt_jet3_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18->Range(-100,-0.888744,566.6667,4.988396);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__20 = new TH1D("_QuadJet_TripleTag_pt_jet3__20","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(5,5366);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(6,13278);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(7,11636);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(8,8433);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(9,5365);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(10,3344);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(11,2124);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(12,1373);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(13,941);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(14,556);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(15,356);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(16,249);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(17,162);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(18,104);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(19,79);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(20,63);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(21,50);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(22,25);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(23,14);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(24,15);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(25,10);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(26,7);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(27,6);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(28,5);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(29,2);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(30,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(31,3);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(32,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(33,2);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(34,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(35,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(36,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(40,1);
   _QuadJet_TripleTag_pt_jet3__20->SetBinContent(51,1);
   _QuadJet_TripleTag_pt_jet3__20->SetEntries(53575);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53575  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.91");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.46");
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
   pt_jet3_2018_QuadJet_TripleTag_18->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18->cd();
   pt_jet3_2018_QuadJet_TripleTag_18->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18);
}
