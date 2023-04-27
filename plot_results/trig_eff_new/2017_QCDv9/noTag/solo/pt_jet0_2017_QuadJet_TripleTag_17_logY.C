#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:18:22 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,0.5830898,566.6667,3.783091);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(7,16);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,102);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,377);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,755);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1095);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,1353);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,1473);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,1533);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,1485);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,1385);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,1232);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,1181);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,948);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,856);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,792);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,683);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,589);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,555);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,466);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,427);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,339);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,319);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,321);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,271);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,195);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,209);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,208);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,193);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,174);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,142);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,134);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,110);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,114);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,86);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,84);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,87);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,76);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,56);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,69);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,50);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,54);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,51);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,35);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,40);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,418);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(21138);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21138  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  188.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   81.2");
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
