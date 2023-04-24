#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16/pt_jet0_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16", "pt_jet0_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->Range(-100,-0.7188744,566.6667,3.459569);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet0__224 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet0__224","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(7,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(8,5);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(9,17);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(10,124);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(11,272);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(12,428);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(13,521);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(14,546);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(15,552);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(16,581);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(17,486);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(18,501);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(19,467);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(20,344);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(21,373);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(22,341);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(23,310);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(24,285);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(25,224);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(26,206);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(27,187);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(28,223);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(29,157);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(30,146);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(31,130);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(32,123);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(33,88);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(34,106);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(35,94);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(36,87);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(37,70);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(38,66);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(39,56);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(40,52);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(41,45);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(42,50);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(43,58);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(44,45);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(45,48);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(46,34);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(47,35);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(48,25);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(49,26);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(50,26);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetBinContent(51,314);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetEntries(8875);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8875   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  208.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  86.15");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet0__224);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet0__224->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__224->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16);
}
