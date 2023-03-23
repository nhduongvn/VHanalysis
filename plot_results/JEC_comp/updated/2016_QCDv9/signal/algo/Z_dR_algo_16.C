#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.0195309,7.029799,0.1432266);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1269508);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(0.1269508);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Event/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.05195975);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.07575617);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.08254041);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.04507273);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.03351907);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.01873705);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.02083013);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.00533773);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.002608219);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.005928949);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.005681063);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.00255346);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.003167344);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.005756839);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.003147095);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01225925);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01490851);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01568112);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01165979);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.009896571);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.007255253);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.007892602);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.003785533);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.002608219);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.004192404);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004017436);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.00255346);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.003167344);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.004070876);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.003147095);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01111939);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.02093845);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.0228288);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.02151615);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.01194802);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.00605827);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.003697425);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.001196759);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.0007702015);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.002492798);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.003388351);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.001475482);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.002546234);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.002379906);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.000390353);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0003800229);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0003837142);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.000697831);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.002046828);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.002817674);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.002970843);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.002845987);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.00213787);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.001518172);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001177026);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.0006921898);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.0004868185);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0009518592);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001137156);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.0007382148);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0009751008);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0009727511);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.000390353);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0003800229);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0003837142);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0004954538);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
