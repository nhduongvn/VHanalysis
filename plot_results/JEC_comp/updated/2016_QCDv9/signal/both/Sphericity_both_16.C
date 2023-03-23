#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Mar 23 11:25:15 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-0.08927562,1.171633,0.6546879);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5802915);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0);
   st_stack_249->SetMaximum(0.5802915);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetTitle("Sphericity");
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetTitleOffset(1);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Event/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetTitleSize(0.037);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetTitleOffset(1);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.04606887);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.2623667);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.3376023);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.3340331);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.2867122);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.1836331);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.06471698);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.04496352);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.02829941);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.01605502);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.01112856);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.01687106);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.008983593);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.005899946);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.01003232);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.002851593);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.002417997);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.002824748);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.01137151);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.02758394);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.03133207);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03153809);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.02933169);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02315343);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01445331);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.01129168);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.009021933);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.006586387);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.005570484);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.006565225);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.005198246);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.00417243);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.005041076);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.002851593);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.002417997);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.002824748);
   VbbHcc_both_Sphericity_stack_1->SetEntries(591);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.04462496);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.1169663);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.1440397);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.1462864);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.09070411);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.0637782);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.0312858);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.02326929);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.01409991);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.00846814);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.008299972);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.007957296);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.007161321);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.004558173);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.003258002);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.00351891);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.001496911);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.0007469745);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.0006033119);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.004093592);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.006643081);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.007347902);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007437921);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.005877404);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.00494322);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.003420206);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.002956316);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.002332396);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.001776309);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.001744904);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.001742877);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.00162672);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.001297635);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001108019);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.001175183);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0007566706);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.0005281975);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0004363192);
   VbbHcc_both_Sphericity_stack_2->SetEntries(1958);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
