#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16/pt_jet1_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16", "pt_jet1_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16->Range(-100,-0.8489295,566.6667,4.630065);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet1__32 = new TH1D("_DoubleJet_TripleTag_pt_jet1__32","",50,0,500);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(5,1);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(6,52);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(7,194);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(8,711);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(9,2324);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(10,5093);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(11,6377);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(12,5900);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(13,5102);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(14,4190);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(15,3457);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(16,2822);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(17,2322);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(18,1865);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(19,1529);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(20,1310);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(21,1120);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(22,938);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(23,789);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(24,618);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(25,535);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(26,414);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(27,381);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(28,343);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(29,283);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(30,252);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(31,204);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(32,178);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(33,187);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(34,138);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(35,121);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(36,107);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(37,97);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(38,95);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(39,59);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(40,61);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(41,77);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(42,54);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(43,55);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(44,45);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(45,58);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(46,26);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(47,40);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(48,28);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(49,33);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(50,26);
   _DoubleJet_TripleTag_pt_jet1__32->SetBinContent(51,301);
   _DoubleJet_TripleTag_pt_jet1__32->SetEntries(50912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50912  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  147.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.35");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet1__32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet1__32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet1__32->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet1__32->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet1__32->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet1__32->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet1__32->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet1__32->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet1__32->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet1__32->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16);
}
