#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,0.665276,566.6667,3.789752);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(7,19);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,114);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,400);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,799);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1135);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,1413);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,1535);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,1584);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,1534);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,1448);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,1288);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,1228);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,991);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,895);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,831);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,712);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,609);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,578);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,480);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,439);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,353);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,332);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,332);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,284);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,201);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,211);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,217);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,201);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,177);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,145);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,142);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,112);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,117);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,87);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,89);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,90);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,80);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,59);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,72);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,54);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,55);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,52);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,37);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,40);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,432);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(22003);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22003  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    188");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet0__2->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17->cd();
   pt_jet0_2017_QuadJet_TripleTag_17->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17);
}
