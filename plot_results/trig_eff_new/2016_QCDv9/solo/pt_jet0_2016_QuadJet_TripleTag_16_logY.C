#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16/pt_jet0_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:13:59 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16", "pt_jet0_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16->Range(-100,-0.8311735,566.6667,4.470261);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(5,1);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(6,79);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(7,714);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,1793);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,3173);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,3978);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,4327);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,4511);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,4598);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,4212);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,4127);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,3710);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,3321);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,3071);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,2748);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,2352);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,2156);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,1884);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,1745);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,1511);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,1410);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,1179);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,1054);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,1007);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,891);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,808);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,735);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,628);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,551);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,540);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,460);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,432);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,416);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,348);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,333);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,284);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,234);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,237);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,230);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,216);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,198);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,176);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,145);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,154);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,130);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,113);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,1428);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(68348);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68348  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  177.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.63");
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
   pt_jet0_2016_QuadJet_TripleTag_16->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16->cd();
   pt_jet0_2016_QuadJet_TripleTag_16->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16);
}
