#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16/pt_jet2_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16", "pt_jet2_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16->Range(-100,-0.8855616,566.6667,4.959754);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__50 = new TH1D("_QuadJet_TripleTag_pt_jet2__50","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(5,833);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(6,8132);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(7,12522);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(8,11541);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(9,9240);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(10,6933);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(11,5060);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(12,3595);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(13,2638);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(14,1927);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(15,1418);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(16,1039);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(17,801);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(18,564);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(19,445);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(20,367);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(21,263);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(22,190);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(23,148);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(24,130);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(25,102);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(26,75);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(27,63);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(28,52);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(29,35);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(30,38);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(31,30);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(32,35);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(33,27);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(34,11);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(35,12);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(36,9);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(37,12);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(38,8);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(39,9);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(40,4);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(41,6);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(42,4);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(43,6);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(44,4);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(45,4);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(46,4);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(48,1);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(49,3);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(50,1);
   _QuadJet_TripleTag_pt_jet2__50->SetBinContent(51,7);
   _QuadJet_TripleTag_pt_jet2__50->SetEntries(68348);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68348  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  90.92");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.11");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__50->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__50->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__50->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__50->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__50->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__50->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__50->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__50->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__50->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__50->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__50->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__50->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__50->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16->cd();
   pt_jet2_2016_QuadJet_TripleTag_16->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16);
}
