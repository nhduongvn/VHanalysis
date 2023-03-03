#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CvL_17()
{
//=========Macro generated from canvas: overlay_jets_CvL_17/overlay_jets_CvL_17
//=========  (Wed Mar  1 15:11:08 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CvL_17 = new TCanvas("overlay_jets_CvL_17", "overlay_jets_CvL_17",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CvL_17->SetHighLightColor(2);
   overlay_jets_CvL_17->Range(-0.2,-0.05673595,1.133333,0.5106235);
   overlay_jets_CvL_17->SetFillColor(0);
   overlay_jets_CvL_17->SetBorderMode(0);
   overlay_jets_CvL_17->SetBorderSize(2);
   overlay_jets_CvL_17->SetLeftMargin(0.15);
   overlay_jets_CvL_17->SetFrameBorderMode(0);
   overlay_jets_CvL_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",20,0,1);
   st_stack_62->SetMinimum(0);
   st_stack_62->SetMaximum(0.4538875);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.05");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,0.1900148);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,0.2546614);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,0.10134);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,0.05221076);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,0.03304985);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,0.02512062);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,0.02018878);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,0.01719489);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,0.01550104);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,0.01473007);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,0.01441642);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,0.01410157);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,0.01404299);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,0.01444448);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,0.01539328);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,0.01735486);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,0.0196703);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,0.02398207);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,0.03138247);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,0.1111994);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.0003816693);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,0.0004445841);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.0002822482);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.0002029696);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.0001617635);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.0001408368);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.0001263016);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.0001170436);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.0001110302);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.0001085722);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.0001068653);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.0001056553);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.0001053876);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.0001067617);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.000110207);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.0001165482);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.0001243449);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.0001372908);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.000157079);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.0002960922);
   VbbHcc_jets_CvL_stack_1->SetEntries(2586448);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->SetLineWidth(2);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,0.4322739);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,0.3383642);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,0.08864191);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,0.03523911);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,0.01858719);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,0.01192399);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,0.008334298);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,0.006091958);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,0.004866399);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,0.004116647);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,0.003600065);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,0.003216856);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,0.002986424);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,0.002919797);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,0.00304264);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,0.003304724);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,0.003698831);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,0.004563296);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,0.006163024);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,0.01806476);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,8.069059e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,7.08923e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,3.618696e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,2.277177e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,1.65319e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,1.323529e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,1.106717e-05);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,9.454551e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,8.456564e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,7.776485e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,7.261424e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,6.861106e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,6.600587e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,6.528803e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,6.661656e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,6.935524e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,7.322265e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,8.123266e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,9.414488e-06);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,1.620485e-05);
   VbbHcc_jets_CvL_stack_2->SetEntries(2.383807e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->SetLineStyle(2);
   VbbHcc_jets_CvL_stack_2->SetLineWidth(2);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","CvL (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","CvL (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_CvL_17->Modified();
   overlay_jets_CvL_17->cd();
   overlay_jets_CvL_17->SetSelected(overlay_jets_CvL_17);
}
