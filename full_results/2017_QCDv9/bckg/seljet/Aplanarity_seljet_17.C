#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Thu Feb 16 10:35:38 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,-3.004361e+08,1.171633,2.203198e+09);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
   Aplanarity_seljet_17->SetLeftMargin(0.15709);
   Aplanarity_seljet_17->SetRightMargin(0.1234783);
   Aplanarity_seljet_17->SetBottomMargin(0.12);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.952835e+09);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(0);
   st_stack_318->SetMaximum(1.952835e+09);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetTitle("Aplanarity");
   st_stack_318->GetXaxis()->SetRange(1,50);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetTitleOffset(1);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.02");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetTitleSize(0.037);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetTitleOffset(1);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,31.68188);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,1.298656e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,6.657953e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,3.551648e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,2.030677e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,1.226032e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,7.751564e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,4.996244e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,3.303085e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,2.204714e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.479451e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,1.002525e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,6725535);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,4438255);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,2996452);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1849733);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,1204457);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,715233.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,446455.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,178697.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,93100.24);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,50233.81);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,14716.84);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,3518.206);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,92.83452);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,20.17615);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,1442469);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,1095979);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,809943.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,615503.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,477084.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,374914.9);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,292455.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,242091.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,202635.3);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,157041.4);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,136930.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,106317);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,99969.45);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,75994.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,61060.31);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,47661.27);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,38401.99);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,36088.82);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,10989.27);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,8007.731);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,6209.342);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,3223.596);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,947.5843);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,46.89552);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(4.293574e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,0.5254122);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,3234278);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,2562653);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,1748687);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,1197707);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,836576);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,593977.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,426546.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,307845.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,222443.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,160376);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,114685.9);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,81043.23);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,56610.58);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,38743.55);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,25861.51);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,16783.6);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,10434.98);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,6165.079);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,3420.6);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,1737.246);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,768.895);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,278.7235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,76.15192);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,13.16674);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.4787078);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.196176);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,489.5974);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,439.221);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,364.1122);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,301.8769);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,252.583);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,213.0154);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,180.636);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,153.5392);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,130.5855);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,110.9341);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,93.85063);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,78.91908);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,65.99654);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,54.607);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,44.63727);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,35.9874);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,28.35981);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,21.80776);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,16.25889);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,11.59143);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,7.706264);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,4.637358);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,2.419211);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.039654);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.1857903);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(1.694272e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_17->Modified();
   Aplanarity_seljet_17->cd();
   Aplanarity_seljet_17->SetSelected(Aplanarity_seljet_17);
}
