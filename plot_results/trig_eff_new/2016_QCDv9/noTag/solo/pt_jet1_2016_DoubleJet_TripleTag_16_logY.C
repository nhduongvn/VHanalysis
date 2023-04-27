#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16/pt_jet1_2016_DoubleJet_TripleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16", "pt_jet1_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16->Range(-100,-0.8488443,566.6667,4.629298);
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
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(7,193);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(8,713);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(9,2318);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(10,5094);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(11,6367);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(12,5899);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(13,5089);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(14,4190);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(15,3455);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(16,2825);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(17,2317);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(18,1855);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(19,1528);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(20,1305);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(21,1118);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(22,937);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(23,794);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(24,618);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(25,533);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(26,415);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(27,378);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(28,342);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(29,282);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(30,251);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(31,206);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(32,178);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(33,187);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(34,138);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(35,123);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(36,108);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(37,98);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(38,94);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(39,59);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(40,61);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(41,76);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(42,54);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(43,55);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(44,45);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(45,59);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(46,27);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(47,40);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(48,28);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(49,33);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(50,25);
   _DoubleJet_TripleTag_pt_jet1__20->SetBinContent(51,301);
   _DoubleJet_TripleTag_pt_jet1__20->SetEntries(50864);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50864  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  147.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.38");
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
