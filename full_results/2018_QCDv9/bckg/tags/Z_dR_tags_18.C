#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Mon Dec 19 11:11:45 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-1767814,7.029799,1.296397e+07);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.149079e+07);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(1.149079e+07);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,4421.95);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,6115185);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,7276947);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,5364055);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,4761476);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,4188334);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,4154903);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4084936);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,4666715);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,4190040);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,4615099);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,5620687);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,5720054);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,6777557);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,7220276);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,3979838);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,2835918);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,2110969);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,1428219);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,729946.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,582979);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,433304.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,284433.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,204916.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,52502.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,38483.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,4504.979);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1398.815);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,2032.908);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,209538.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,243535);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,204917.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,203822.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,181376.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,193471.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,194953);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,230896.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,206912.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,211075.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,250614.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,246677.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,291071.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,288082);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,198156.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,171908.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,160535.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,128919.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,67397.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,68857.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,67963.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,64338.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,52589.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,8457.169);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,18861.07);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,2601.191);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1398.254);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(570110);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,39.85473);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,60857.71);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,118889.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,142261);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,173563.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,203113.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,231185.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,259203.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,287661.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,318444.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,350852.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,385132.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,419043.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,449206.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,440251.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,232643.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,132740.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,79038.69);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,46805.74);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,27173.29);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,15266.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,8283.141);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,4243.167);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1989.299);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,831.7649);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,298.0523);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,71.51415);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,3.679331);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.82417);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,76.08209);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,106.3754);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,115.9816);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,128.8593);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,138.9144);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,148.3847);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,156.68);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,165.1778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,174.1862);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,182.4931);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,191.0956);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,200.0093);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,207.5007);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,205.2962);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,149.6118);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,112.9185);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,86.95531);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,67.20207);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,51.341);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,38.61227);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,28.58066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,19.66411);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,13.50493);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,9.432062);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,5.293833);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,3.494426);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.526017);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(5.729977e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
