#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Feb 16 10:35:33 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-640115.7,1.171633,4694182);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4160752);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(4160752);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2542409);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1268731);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,587099.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,360101.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,223306.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,128324.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,70629.32);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,55786.47);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,37902.35);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,24230.24);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,13465.59);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,7476.561);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,8000.309);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,3872.889);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,3305.071);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,1594.202);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,130.9513);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1430.63);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,65.56338);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,327.8852);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,34337.02);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,54520.44);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,19370.33);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,28220.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,25301.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,8889.125);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,5862.528);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,6138.114);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,5081.125);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,4682.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,3035.815);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,1303.175);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,2325.196);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,977.0344);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,961.419);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,646.3106);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,47.46833);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,1334.365);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,31.85146);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,314.1936);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(237768);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.07291655);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,231425.4);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,165483.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,110019.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,74819.63);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,52113.23);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,37142.93);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,26556.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,19239.26);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,13950.41);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,10067.1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,7228.618);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,5120.495);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,3585.855);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,2464.13);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,1641.928);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,1075.277);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,660.0295);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,399.8914);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,214.7862);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,109.3506);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,48.36614);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,19.08363);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,4.362451);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,0.4049785);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.06202932);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,128.5018);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,109.1033);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,89.12581);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,73.5899);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,61.48158);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,51.94347);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,43.94095);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,37.41028);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,31.87788);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,27.08687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,22.95968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,19.33323);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,16.17704);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,13.41319);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,10.96379);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,8.865493);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,6.952931);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,5.404611);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,3.966161);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,2.833754);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,1.886229);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.175273);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.5685881);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.1583843);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1.12179e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
