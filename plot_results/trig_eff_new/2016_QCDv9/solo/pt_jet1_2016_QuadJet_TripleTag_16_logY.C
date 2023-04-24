#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16/pt_jet1_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16", "pt_jet1_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16->Range(-100,0.6935246,566.6667,4.550091);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__26 = new TH1D("_QuadJet_TripleTag_pt_jet1__26","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(5,36);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(6,1336);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(7,4618);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(8,7027);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(9,7707);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(10,7344);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(11,6488);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(12,5540);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(13,4672);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(14,3895);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(15,3219);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(16,2623);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(17,2174);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(18,1745);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(19,1438);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(20,1224);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(21,1066);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(22,879);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(23,751);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(24,587);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(25,507);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(26,390);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(27,359);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(28,328);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(29,270);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(30,240);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(31,189);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(32,166);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(33,176);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(34,130);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(35,114);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(36,100);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(37,89);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(38,92);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(39,59);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(40,60);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(41,76);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(42,52);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(43,52);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(44,44);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(45,58);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(46,24);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(47,39);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(48,28);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(49,31);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(50,24);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(51,282);
   _QuadJet_TripleTag_pt_jet1__26->SetEntries(68348);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68348  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  126.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.06");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet1__26->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet1__26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet1__26->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet1__26->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet1__26->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet1__26->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__26->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__26->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__26->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet1__26->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__26->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__26->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__26->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__26->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__26->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16->cd();
   pt_jet1_2016_QuadJet_TripleTag_16->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16);
}
