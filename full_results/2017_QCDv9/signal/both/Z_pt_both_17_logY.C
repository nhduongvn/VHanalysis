void Z_pt_both_17_logY()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(37.97653,0.3578042,1705.96,3.31249);
   Z_pt_both_17->SetFillColor(0);
   Z_pt_both_17->SetFillStyle(4000);
   Z_pt_both_17->SetBorderMode(0);
   Z_pt_both_17->SetBorderSize(2);
   Z_pt_both_17->SetLogy();
   Z_pt_both_17->SetLeftMargin(0.15709);
   Z_pt_both_17->SetRightMargin(0.1234783);
   Z_pt_both_17->SetBottomMargin(0.12);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(755.9576);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",40,0,2000);
   st_stack_138->SetMinimum(5.156636);
   st_stack_138->SetMaximum(1039.971);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_138->GetXaxis()->SetRange(7,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetLabelSize(0.035);
   st_stack_138->GetXaxis()->SetTitleSize(0.035);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/50.0");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetLabelSize(0.035);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleOffset(0);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetLabelSize(0.035);
   st_stack_138->GetZaxis()->SetTitleSize(0.035);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,3.248496);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,6.168962);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,4.090024);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,2.08166);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,1.18659);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.5781979);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.3199757);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.211036);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.09085709);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.04538608);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.02455248);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.01414584);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.007223961);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.006756617);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.001737085);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.003684786);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.07870165);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1085133);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.08773034);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.06264268);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.04715948);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.03325337);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02441129);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01973098);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.0128794);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.00939996);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.007493907);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.005036923);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.00368953);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.003392458);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.003670836);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.001737085);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.002608578);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinError(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinError(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetEntries(10491);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.496779);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,1.390615);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,1.585675);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,1.042675);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.5722261);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.2833835);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.1371958);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.07785773);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.03042311);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.01334186);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.004266958);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.002640957);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.002220949);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.001350269);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0004050878);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01090634);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.0183668);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01958933);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01582836);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01174677);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.008209434);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.005688488);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.00434876);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.002668714);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001791734);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.00101284);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0008141768);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0007514186);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0005629474);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0002887157);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetEntries(24456);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_17->Modified();
   Z_pt_both_17->cd();
   Z_pt_both_17->SetSelected(Z_pt_both_17);
}
