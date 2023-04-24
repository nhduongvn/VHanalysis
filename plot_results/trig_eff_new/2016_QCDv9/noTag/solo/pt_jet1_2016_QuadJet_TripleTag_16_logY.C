#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16/pt_jet1_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16", "pt_jet1_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16->Range(-100,0.6931036,566.6667,4.55388);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__26 = new TH1D("_QuadJet_TripleTag_pt_jet1__26","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(5,36);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(6,1341);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(7,4644);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(8,7061);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(9,7767);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(10,7392);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(11,6522);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(12,5556);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(13,4696);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(14,3914);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(15,3228);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(16,2645);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(17,2190);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(18,1749);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(19,1443);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(20,1223);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(21,1070);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(22,884);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(23,754);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(24,591);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(25,508);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(26,394);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(27,358);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(28,328);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(29,272);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(30,240);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(31,191);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(32,166);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(33,175);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(34,131);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(35,115);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(36,101);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(37,91);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(38,92);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(39,59);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(40,59);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(41,76);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(42,51);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(43,51);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(44,43);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(45,59);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(46,25);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(47,39);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(48,28);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(49,31);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(50,24);
   _QuadJet_TripleTag_pt_jet1__26->SetBinContent(51,286);
   _QuadJet_TripleTag_pt_jet1__26->SetEntries(68699);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68699  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    126");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.01");
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
