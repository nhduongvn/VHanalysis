#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,0.665758,566.6667,3.785414);
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
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,397);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,795);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1123);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,1405);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,1526);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,1570);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,1522);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,1434);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,1278);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,1224);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,982);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,884);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,825);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,708);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,607);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,575);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,477);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,436);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,351);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,331);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,330);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,283);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,200);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,210);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,217);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,201);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,177);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,145);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,141);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,111);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,115);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,87);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,89);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,88);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,79);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,57);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,71);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,54);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,55);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,50);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,37);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,40);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,430);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(21850);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21850  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    188");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.11");
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
