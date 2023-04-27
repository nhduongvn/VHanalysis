#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16/pt_jet1_2016_DoubleJet_TripleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16", "pt_jet1_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16->Range(-100,-0.8493872,566.6667,4.634185);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet1__20 = new TH1D("_DoubleJet_TripleTag_pt_jet1__20","",50,0,500);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(5,1);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(6,52);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(7,194);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(8,720);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(9,2340);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(10,5136);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(11,6431);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(12,5948);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(13,5137);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(14,4224);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(15,3479);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(16,2854);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(17,2341);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(18,1875);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(19,1540);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(20,1315);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(21,1127);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(22,945);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(23,795);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(24,623);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(25,538);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(26,419);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(27,383);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(28,344);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(29,285);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(30,252);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(31,206);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(32,179);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(33,187);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(34,139);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(35,123);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(36,108);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(37,99);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(38,95);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(39,59);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(40,62);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(41,77);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(42,54);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(43,55);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(44,45);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(45,59);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(46,27);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(47,40);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(48,28);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(49,33);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(50,26);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(51,305);
   _DoubleJet_TripleTag_pt_jet1__20->SetEntries(51304);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 51304  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    147");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet1__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet1__20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet1__20->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet1__20->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet1__20->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet1__20->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet1__20->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet1__20->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet1__20->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__20->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16);
}
