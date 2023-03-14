#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-0.6864154,1.171633,5.033713);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.4617);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(4.4617);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2.654427);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.656492);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1.114505);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.6997877);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.5337793);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.3777267);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.267865);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1910751);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.1263525);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.08218976);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.08057411);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.06442609);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.05974308);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.02268845);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.01308533);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.005309678);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.002231337);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.1002426);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.06888935);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.05927859);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.04394855);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.04244248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.03165393);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.02755216);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.02288408);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.01883586);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01449373);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01497447);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.01321765);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.01370558);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.007345432);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.005919869);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.003193875);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.002231337);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(22,0.002019195);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1.048784);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.7753862);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.5134305);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.3468759);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.2236747);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.171288);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.113367);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.08526027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.04879043);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.03515594);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.03113738);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.0182245);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.01412368);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.006249696);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.005038777);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.002425643);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.001797131);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.001009992);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0004346981);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.02016098);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01702146);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.01386049);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.01140372);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.00901363);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.007778361);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.006535947);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.007468919);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.004113498);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.003985121);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.004795596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.003586515);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.00240036);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001444285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.001340722);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0009376206);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0008169495);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0007202604);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0004346981);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
