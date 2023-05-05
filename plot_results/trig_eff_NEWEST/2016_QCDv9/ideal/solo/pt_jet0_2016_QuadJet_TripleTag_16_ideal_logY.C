#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_ideal/pt_jet0_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_ideal", "pt_jet0_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.5947089,566.6667,2.34208);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(6,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(7,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(8,16);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(9,27);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(10,32);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(11,40);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(12,48);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(13,58);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(14,39);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(15,59);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(16,41);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(17,37);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(18,36);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(19,27);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(20,35);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(21,24);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(22,33);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(23,26);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(24,26);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(25,19);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(26,16);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(27,21);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(28,19);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(29,15);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(30,12);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(31,9);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(32,14);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(33,7);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(34,10);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(35,10);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(36,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(37,7);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(38,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(39,9);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(41,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(42,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(43,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(46,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(47,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(48,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(49,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(51,23);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetEntries(842);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 842    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  88.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->Draw("HIST");
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16_ideal);
}
