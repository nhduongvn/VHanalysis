#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_all()
{
//=========Macro generated from canvas: Z_pt_both_all/Z_pt_both_all
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_both_all = new TCanvas("Z_pt_both_all", "Z_pt_both_all",0,0,600,600);
   Z_pt_both_all->SetHighLightColor(2);
   Z_pt_both_all->Range(37.97653,-2.801797,1705.96,20.54651);
   Z_pt_both_all->SetFillColor(0);
   Z_pt_both_all->SetFillStyle(4000);
   Z_pt_both_all->SetBorderMode(0);
   Z_pt_both_all->SetBorderSize(2);
   Z_pt_both_all->SetLeftMargin(0.15709);
   Z_pt_both_all->SetRightMargin(0.1234783);
   Z_pt_both_all->SetBottomMargin(0.12);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(18.21168);
   
   TH1F *st_stack_124 = new TH1F("st_stack_124","",40,0,2000);
   st_stack_124->SetMinimum(0);
   st_stack_124->SetMaximum(18.21168);
   st_stack_124->SetDirectory(0);
   st_stack_124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_124->SetLineColor(ci);
   st_stack_124->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_124->GetXaxis()->SetRange(7,30);
   st_stack_124->GetXaxis()->SetLabelFont(42);
   st_stack_124->GetXaxis()->SetTitleOffset(1);
   st_stack_124->GetXaxis()->SetTitleFont(42);
   st_stack_124->GetYaxis()->SetTitle("Events/50.0");
   st_stack_124->GetYaxis()->SetLabelFont(42);
   st_stack_124->GetYaxis()->SetTitleSize(0.037);
   st_stack_124->GetYaxis()->SetTitleFont(42);
   st_stack_124->GetZaxis()->SetLabelFont(42);
   st_stack_124->GetZaxis()->SetTitleOffset(1);
   st_stack_124->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_124);
   
   
   TH1D *VbbHcc_both_Z_pt_all_stack_1 = new TH1D("VbbHcc_both_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(1,6.8436);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(2,12.14112);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(3,7.56439);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(4,3.499873);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(5,1.715021);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(6,0.8934431);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(7,0.4651158);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(8,0.2909943);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(9,0.1580718);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(10,0.06147388);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(11,0.04721248);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(12,0.01591645);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(13,0.01866258);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(14,0.008098496);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(16,0.004534443);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(17,0.001546166);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(18,0.002796245);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(21,0.002353708);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(24,0.002551435);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(1,0.1208862);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(2,0.1609851);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(3,0.1268789);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(4,0.08754227);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(5,0.05989564);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(6,0.04335589);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(7,0.03138175);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(8,0.02470826);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(9,0.0184929);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(10,0.01114871);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(11,0.009738215);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(12,0.005350794);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(13,0.006263558);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(14,0.003801075);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(16,0.003378575);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(17,0.001545188);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(18,0.001988152);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(21,0.002353708);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(24,0.002551435);
   VbbHcc_both_Z_pt_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_all_stack_2 = new TH1D("VbbHcc_both_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(1,1.084278);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(2,2.749363);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(3,3.063033);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(4,1.925257);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(5,0.9503527);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(6,0.4932031);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(7,0.2608638);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(8,0.1508336);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(9,0.0775884);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(10,0.04480631);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(11,0.02856156);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(12,0.0209414);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(13,0.01403921);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(14,0.01069075);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(15,0.00446691);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(16,0.003432803);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(17,0.003690849);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(18,0.004306441);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(19,0.003080652);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(20,0.0005374697);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(21,0.001327758);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(23,0.0008751304);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(24,0.000206937);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(25,0.001124796);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(26,0.0002197336);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(27,0.0001275402);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(29,0.0004949126);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(33,0.0005555899);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(35,0.0001892237);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(1,0.01769848);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(2,0.02832105);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(3,0.03011138);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(4,0.02356739);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(5,0.01660652);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(6,0.01187461);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(7,0.008643375);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(8,0.006699803);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(9,0.004778285);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(10,0.003599232);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(11,0.002879103);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(12,0.002518);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(13,0.00204921);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(14,0.001778993);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(15,0.0009737472);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(16,0.001002298);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(17,0.0009515154);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(18,0.001080788);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(19,0.0009324915);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(20,0.000310582);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(21,0.000729167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(23,0.0003995351);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(24,0.0001878671);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(25,0.0005180282);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(26,0.000164479);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(27,0.0001275402);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(29,0.0004949126);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(33,0.0004107145);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(35,0.0001892237);
   VbbHcc_both_Z_pt_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_all->Modified();
   Z_pt_both_all->cd();
   Z_pt_both_all->SetSelected(Z_pt_both_all);
}
