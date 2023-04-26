#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16/pt_jet3_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 25 23:03:06 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16", "pt_jet3_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->Range(-100,-0.8847052,566.6667,4.952046);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet3__44 = new TH1D("_DoubleJet_TripleTag_pt_jet3__44","",50,0,500);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(5,6632);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(6,12326);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(7,10183);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(8,7548);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(9,5252);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(10,3196);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(11,2089);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(12,1348);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(13,836);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(14,599);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(15,326);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(16,242);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(17,169);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(18,119);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(19,77);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(20,42);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(21,36);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(22,31);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(23,31);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(24,11);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(25,12);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(26,12);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(27,12);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(28,6);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(29,6);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(30,6);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(31,3);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(32,4);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(33,2);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(37,1);
   _DoubleJet_TripleTag_pt_jet3__44->SetBinContent(38,1);
   _DoubleJet_TripleTag_pt_jet3__44->SetEntries(51158);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 51158  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.63");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   25.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet3__44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet3__44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet3__44->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet3__44->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet3__44->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet3__44->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3__44->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet3__44->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3__44->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__44->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16);
}
