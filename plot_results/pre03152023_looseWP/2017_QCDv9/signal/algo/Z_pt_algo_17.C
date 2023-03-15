#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_17()
{
//=========Macro generated from canvas: Z_pt_algo_17/Z_pt_algo_17
//=========  (Fri Mar 10 11:26:56 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_17 = new TCanvas("Z_pt_algo_17", "Z_pt_algo_17",0,0,600,600);
   Z_pt_algo_17->SetHighLightColor(2);
   Z_pt_algo_17->Range(37.97653,-0.692014,1705.96,5.074769);
   Z_pt_algo_17->SetFillColor(0);
   Z_pt_algo_17->SetFillStyle(4000);
   Z_pt_algo_17->SetBorderMode(0);
   Z_pt_algo_17->SetBorderSize(2);
   Z_pt_algo_17->SetLeftMargin(0.15709);
   Z_pt_algo_17->SetRightMargin(0.1234783);
   Z_pt_algo_17->SetBottomMargin(0.12);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.498091);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",40,0,2000);
   st_stack_74->SetMinimum(0);
   st_stack_74->SetMaximum(4.498091);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_74->GetXaxis()->SetRange(7,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.7720289);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,2.60896);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,3.733416);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,2.349352);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,1.486192);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.8087043);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.480797);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.2815801);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.1587107);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.06692141);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.03887098);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.02567553);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.02304484);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.01180393);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(15,0.005348071);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(16,0.003715589);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.007537002);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(18,0.003653842);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(19,0.003628642);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(20,0.0047019);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(24,0.002353691);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(25,0.001995241);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.03751332);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.07011496);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.08431426);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.06671338);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.0529525);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.039169);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.02998265);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.02309994);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.01739577);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.01102068);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.008371919);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.006868078);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.006507886);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.004820914);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(15,0.003109636);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(16,0.002636023);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.003777443);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(18,0.00259717);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(19,0.002577675);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(20,0.003325545);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(24,0.002353691);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(25,0.001995241);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(7553);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.2447344);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.7255919);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,1.368283);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,1.034109);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.6049975);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.3366669);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.1559784);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.08347682);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.03195181);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.01685436);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.006556168);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.004138592);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,0.002126615);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,0.0008515111);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,0.0005989123);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,0.0005009885);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,0.0002586282);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.007635521);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.01320616);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.01819747);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.01576771);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.01206143);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.008983135);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.006114015);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.004457987);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.002776439);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.001999801);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.001253706);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0009986152);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,0.000689973);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,0.0004412531);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,0.0003567175);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,0.000354512);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.0001931736);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(20065);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_17->Modified();
   Z_pt_algo_17->cd();
   Z_pt_algo_17->SetSelected(Z_pt_algo_17);
}
