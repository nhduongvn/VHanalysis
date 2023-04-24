#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17/pt_jet1_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17", "pt_jet1_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17->Range(-100,-0.2561659,566.6667,4.066406);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__38 = new TH1D("_QuadJet_TripleTag_pt_jet1__38","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(5,3);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(6,88);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(7,516);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(8,1304);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(9,2101);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(10,2251);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(11,2273);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(12,1924);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(13,1640);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(14,1318);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(15,1084);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(16,922);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(17,721);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(18,584);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(19,463);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(20,425);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(21,336);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(22,260);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(23,203);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(24,179);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(25,157);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(26,104);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(27,119);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(28,105);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(29,93);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(30,67);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(31,65);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(32,55);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(33,48);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(34,37);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(35,39);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(36,30);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(37,23);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(38,22);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(39,21);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(40,15);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(41,15);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(42,13);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(43,28);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(44,6);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(45,8);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(46,8);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(47,9);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(48,5);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(49,7);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(50,4);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(51,56);
   _QuadJet_TripleTag_pt_jet1__38->SetEntries(19754);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19754  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  132.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  58.09");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet1__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet1__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet1__38->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17->cd();
   pt_jet1_2017_QuadJet_TripleTag_17->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17);
}
